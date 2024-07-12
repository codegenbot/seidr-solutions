import sys
string1 = sys.stdin.readline().rstrip()
string2 = sys.stdin.readline().rstrip()
print(max(string1, string2, key=len))