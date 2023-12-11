```
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return "FizzBuzz"
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return str(x)
```