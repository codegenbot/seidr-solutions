import sys
print(sum(1 for c in str(sys.argv[1]) if c.isupper()))