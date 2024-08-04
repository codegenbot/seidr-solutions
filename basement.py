Here is the Python code to solve the problem:

def basement(vector):
    total = 0
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            return i