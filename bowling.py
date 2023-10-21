import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
'''
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
'''
if __name__ == '__main__':
    def score(game):
        result = 0
        frames = []
        for i in range(0, len(game), 2):
            if game[i] == 'X':
                frames.append(10)
            elif game[i] == '-':
                frames.append(0)
            elif game[i + 1] == '/':
                frames.append(10 - int(game[i]))
            else:
                frames.append(int(game[i]) + int(game[i + 1]))

        for i in range(10):
            frame = frames[i]
            # Strike
            if game[i * 2] == 'X':
                if i == 9:
                    if game[18] == 'X':
                        if game[20] == 'X':
                            frame = 30
                        elif game[20] == '-':
                            frame = 20
                        else:
                            frame = 20 + int(game[20])
                    elif game[18] == '-':
                        frame = 10 + int(game[19])
                    else:
                        frame = 10 + int(game[18]) + int(game[19])
                else:
                    if game[i * 2 + 2] == 'X':
                        frame = 20
                        if game[i * 2 + 4] == 'X':
                            frame += 20
                        elif game[i * 2 + 4] == '-':
                            frame += 10
                        else:
                            frame += 10 + int(game[i * 2 + 4])
                    elif game[i * 2 + 2] == '-':
                        frame = 10 + int(game[i * 2 + 3])
                    else:
                        frame = 10 + int(game[i * 2 + 2]) + int(game[i * 2 + 3])
            # Spare
            elif game[i * 2 + 1] == '/':
                frame = 10 + frames[i + 1]

            result += frame

        return result

    print(score('XXXXXXXXXXXX'))
    print(score('5/5/5/5/5/5/5/5/5/5/5'))
    print(score('7115XXX548/279-X53'))
    print(score('532/4362X179-41447/5'))
