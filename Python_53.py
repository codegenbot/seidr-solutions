
import sys

def add(x: int, y: int):
    numbers = []
    for line in sys.stdin:
        numbers.append(int(line))
    return sum(numbers)