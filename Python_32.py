import sys
num_elements = int(sys.stdin.readline().rstrip())
values = list(map(int, sys.stdin.readline().rstrip().split()))[:num_elements]
print(sum(values))