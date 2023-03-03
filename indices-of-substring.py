"""
Given a text string and a target string, return a list of integers of the indices at
which the target appears in the text. Targets may overlap.
For example,
input:
a
5
output:
0

input:
!
!
output:
1
0
input:
r
nm,xcnwqnd@#$fwkdjn3
output:
0

input:
hi
hihihihihihihihihihi
output:
0

input:
############
#
output:
12
0 1 2 3 4 5 6 7 8 9 10 11
"""


def find_indices(text, pattern):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(pattern)] == pattern:
            indices.append(i + 1)
    return indices


if __name__ == '__main__':
    text = input()
    pattern = input()
    indices = find_indices(text, pattern)
    if len(indices) == 0:
        print(0)
    else:
        print(' '.join([str(i) for i in indices]))
