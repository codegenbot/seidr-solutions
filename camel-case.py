
<<REPL>>
<<<GRD>>>

#!/usr/bin/env python
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def convert_camel(s):
    s = "".join(x for x in s if (x.isalnum() or x == ' '))
    return s[0].lower() + s[1:] if s else ''

if __name__ == "__main__":
    f = open("input.txt", "r")
    lines = f.readlines()
    for line in lines:
        print(convert_camel(line))
<<<REPL>>>
