Here is the Python solution:

def basement(input_list):
    for i in range(len(input_list)):
        total = 0
        for j in range(i+1):
            total += input_list[j]
        if total < 0:
            return i
    return -1