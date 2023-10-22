import os
import sys
import math
import datetime
import re

"""
Given a text string and a target string, return a list of integers of the indices at which the target appears in the text. Targets may overlap.
For example,
input:
a
5

output:
0
"""

def getSampleFromFile(name):
#    Append in the default system path '.', then search for sample file.
    samplesList = []
    sampleDir = os.path.join('..', 'samples')
    with open(os.path.join(sampleDir, name), 'rt') as f:
    #    The basic cipher now is just Caesar shift
    #    Need to be enhanced
        cipher = f.read()
        samplesList.append(cipher)
    return samplesList

def process():

    # this is the sample you are going to process
    sample = getSampleFromFile("indexing.txt")

    # write down your result here
    return sample


print process()
if __name__ == '__main__':
