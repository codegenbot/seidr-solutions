import sys

string1 = sys.stdin.readline().strip()
string2 = sys.stdin.readline().strip()

print(max(string1, string2, key=len))