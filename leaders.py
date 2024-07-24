Here is the Python solution for the problem:

def leaders(a):
    leaders = [a[i] for i in range(len(a)-1, -1, -1) if all(x <= a[i] for x in a[i+1:])]
    return leaders[::-1]