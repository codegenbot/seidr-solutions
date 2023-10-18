import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
You are given a list of N people who are attending ACM-ICPC World Finals. Each of them are either well versed in a topic or they are not. Find out the maximum number of topics a 2-person team can know. And also find out how many teams can know that maximum number of topics.
Note Suppose a, b, and c are three different people, then (a,b) and (b,c) are counted as two different teams.
Input Format
The first line contains two integers, N and M, separated by a single space, where N represents the number of people, and M represents the number of topics. N lines follow.
Each line contains a binary string of length M. In this string, 1 indicates that the ith person knows a particular topic, and 0 indicates that the ith person does not know the topic.
Output Format
On the first line, print the maximum number of topics a 2-person team can know.
On the second line, print the number of 2-person teams that can know the maximum number of topics.
Constraints
2 <= N <= 500
1 <= M <= 500
Sample Input
4 5
10101
11100
11010
00101
Sample Output
5
2
"""
if __name__ == '__main__':
    n, m = tuple(map(int, input().split()))
    people = []
    for i in range(n):
        people.append(input())
    max_topics = 0
    max_teams = 0
    for i in range(n):
        for j in range(i+1, n):
            topics = 0
            for k in range(m):
                if people[i][k] == '1' or people[j][k] == '1':
                    topics += 1
            if topics > max_topics:
                max_topics = topics
                max_teams = 1
            elif topics == max_topics:
                max_teams += 1
    print(max_topics)
    print(max_teams)
