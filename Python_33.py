Here is the solution to the problem:

def sort_third(l: list):
    result = []
    for i in range(len(l)):
        if i % 3 == 0:
            result.append(sorted([x for x in l[i//3*3:i+1] if x % 3 == 0]))
        else:
            result.append(l[i])
    return result