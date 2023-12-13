

<<REPL>>
import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
def main():
    cents = int(input())
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    pennies = cents
    print(quarters, dimes, nickles, pennies)
main()
<<REPL>>
