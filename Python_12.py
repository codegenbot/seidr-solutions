```
strings = [s.strip() for s in input("Please enter a list of strings, one per line (or 'stop' to finish): ").split(',') if s.strip()]
print("The longest string is: " + str(longest(strings)) if longest(strings) else "No strings entered")