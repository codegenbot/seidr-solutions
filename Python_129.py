```
print("\n".join(["{}, {}".format(*path) for path in sorted(paths, key=sum)]))