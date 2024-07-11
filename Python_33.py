```
def sort_third():
    l = input("Enter list of integers separated by space: ").split()
    l = list(map(int, l))
    l.sort(key=lambda x: int(str(x)[2]))
    return l

print(sort_third())