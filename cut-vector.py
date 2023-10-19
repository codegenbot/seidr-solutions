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
Given a vector of positive integers, ﬁnd the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
Return the two resulting subvectors as two outputs.

For example,
input:

1

0

output:

1

0

0


input:

1

10

output:

1

10

0


input:

1

100

output:

1

100

0


input:

1

1000

output:

1

1000

0


input:

1

10000

output:

1

10000

0

"""
if __name__ == '__main__':

    # if ableToSplit(data):
    #     print("Can be splitted")
    # else:
    #     print("Can not be splitted")

    n = int(input().strip())

    for _ in range(n):  # the number of numbers in the array
        listN = [int(i) for i in input().split()]
        intList = listN[1:]

        maxValue = max(intList)

        if maxValue == 10:
            print("Can not be splitted")
        else:
            print(calculate(intList))


def calculate(intList):

    avgValue = step(intList)

    if avgValue == -1:
        return "Can not be splitted. Wrong Input!"
    else:

        resultList = calculateSteps(avgValue, intList)
        print(resultList)

        lst1 = [int(x) for x in resultList]

        diffList = list()

        for l in resultList:
            splitList = l.split()
            diffList.append(abs(int(splitList[0])-int(splitList[1])))

        # [a,b] = np.where(diffList == np.amax(diffList))[0]
        # minmA, minmB = np.where(diffList == np.amin(diffList))[0]
        ab = np.where(diffList == np.amax(diffList))[0]
        minmA, minmB = np.where(diffList == np.amin(diffList))[0]

        return "%d %d" % (lst1[ab], lst1[ab] + diffList[ab])

        # return "%d %d" % (lst1[minmA], lst1[minmB])


def step(intList):

    if len(intList) > 0:
        first = intList[0]

        last = intList[len(intList) - 1]

        if first > 0 and last > 0:
            if first < last:
                print("first < last")
                intList.pop()  # remove last
                return step(intList)
            elif first == last:
                print("first == last")
                intList.pop(0)  # remove the first
                return step(intList)
            else:  # (first > last)
                print("first > last")
                intList.pop(0)
                return step(intList)
        elif first == 0 and last > 0:
            print("first == 0 && last != 0")
            return last
        elif first > 0 and last == 0:
            print("first != 0 && last == 0")
            return first
        else:
            return -1
    else:
        return -1


def calculateSteps(avgValue, intList):
    resultStep = list()

    if avgValue != -1:

        for i in range(len(intList)):
            res = int(avgValue)
            for x in range(i, len(intList)):
                if intList[x] != 0:
                    res += int(in(intList[x]))
                    resultStep.append(str(maxN) + " " + str(res))

    return resultStep

def maxV(maxN, aa):
    return maxN - aa
