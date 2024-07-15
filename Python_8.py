from sys import stdin

def read_input():
    return stdin.read().splitlines()

lines = read_input()
n = int(lines[0])
numbers = list(map(int, lines[1].split()))