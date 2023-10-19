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
Lyrics...
Pyramids are amazing
Pyramids are positive
Pyramids are not circles
Pyramids are triangles
An Egyptian triad
Les Pyramides
Circles don't grow
Circles are fine
Circles are positive
I like to draw a circle
But a Pyramids better
When I think of a family
I draw a circle
When I think of a group
Of people I draw a circle
When I think of people
Buying drugs
I draw
Crash! Just kidding
I do draw a circle
But a pyramid's better
This is the system.
The business of entertainment
If your pieces fit the puzzle
The scam runs smooth
How can this truth
Respond to your proof?
Look at the circumstance
This happens all the time
Cope with the frequency
Cope with the frequency
Cope with the frequency
Cope with the frequency
Copes with the frequency
Pyramids are amazing
Pyramids are positive
I like to draw a circle
But a pyramid is better
An Egyptian triad
Pyramids are triangles
Circles are positive
But a pyramid is better
This is the System
The business of entertainment
If your pieces fit the puzzle
Then the scam runs smooth
This happens all the time
Cope with the frequency
Cope with the frequency

Cope with the frequency
Cope with the frequency
Cope with the frequency...
"""
"""
Take a string in kebab-case and convert all of the words to camelCase. Each group of words to convert is delimited by "-", and each grouping is separated by a space. For example: "camel-case example-test-string"-> "camelCase exampleTestString".
For example,
input:

output:

input:
nospaceordash
output:
nospaceordash
input:
two-words
output:
twoWords
input:
two words
output:
two words
input:
all separate words
output:
all separate words
"""
if __name__ == '__main__':
    s = input()
    if s.find("-") == -1:
        print(s)
    else:
        s = s.replace('-', ' ')
        a = s.split()
        a[0] = a[0].lower()
        for i in range(1, len(a)):
            a[i] = a[i].capitalize()
        print("".join(a))
