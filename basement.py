Here is the Python code for the problem:

def basement(lst):
    s = sum(1 if x > 0 else -1 for x in lst)
    for i, x in enumerate(lst):
        s += x
        if s < 0:
            return i

print(basement([1, -1])) # Should print 0
print(basement([1, -100])) # Should print 0
print(basement([2, -1, 100])) # Should print 0
print(basement([2, -95, 100])) # Should print 0
print(basement([2, -30, 5])) # Should print 0