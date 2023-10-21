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
if __name__ == '__main__':
    # read the input
    str = "7115XXX548/279-X53"
    num_list = list(str)
    frame_idx = 0
    # initialize a frame
    frame = {
        "fram_idx" : frame_idx,
        "frame" : []
    }
    frames = [frame]
    # for each round
    for num_str in num_list:
        frame = frames[frame_idx]
        if num_str.isdigit():
            frame["frame"].append(int(num_str))
            if len(frame["frame"]) == 2:
                frame_idx += 1
                frame = {
                    "frame_idx" : frame_idx,
                    "frame" : []
                }
                frames.append(frame)
        else:
            if num_str is '/':
                frame["frame"].append(10 - int(frame["frame"][-1]))
            elif num_str is 'X':
                frame["frame"].append(10)
            elif num_str is '-':
                frame["frame"].append(0)
            else:
                break
            frame_idx += 1
            frame = {
                "frame_idx" : frame_idx,
                "frame" : []
            }
            frames.append(frame)
    # for each frame, calculate the score
    score = 0
    for frame in frames:
        frame_score = 0
        for num in frame["frame"]:
            frame_score += num
        score += frame_score
    print score
