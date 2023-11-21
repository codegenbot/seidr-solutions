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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
"""
def main():
    if len(sys.argv) != 2:
        print("Usage: python {0} <testdata.txt>".format(sys.argv[0]))
        exit(1)

    testDataFile = open(sys.argv[1], "r")
    lines = testDataFile.readlines()

    for temp in lines:
        temp = temp.strip()
        if temp == "":
            continue
        print("args = {0}".format(temp))
        loop_main(temp)
    #   print("Hit Return to continue...")
    #   input()

def loop_main(temp):
    print("Answer = {0}".format(score(temp)))

def score(input):
    score = 0
    frame = 0
    frame_score = 0
    frame_list = []
    for i in range(len(input)):
        if frame_score == 10:
            frame += 1
            frame_score = 0
        if input[i] == 'X':
            frame_list.append(10)
            frame_score += 10
        elif input[i] == '/':
            frame_list.append(10 - frame_list[-1])
            frame_score += frame_list[-1]
        elif input[i] == '-':
            frame_list.append(0)
            frame_score += 0
        else:
            frame_list.append(int(input[i]))
            frame_score += int(input[i])
        if frame == 10:
            break
    for i in range(len(frame_list)):
        if i < len(frame_list)-2 and frame_list[i] == 10:
            score += frame_list[i] + frame_list[i+1] + frame_list[i+2]
        elif i < len(frame_list)-1 and frame_list[i] + frame_list[i+1] == 10:
            score += frame_list[i] + frame_list[i+1] + frame_list[i+2]
        else:
            score += frame_list[i]
    return score

if __name__ == '__main__':
    main()
