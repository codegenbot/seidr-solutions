```
def search():
    lst = list(map(int, input("Enter a list of integers (space-separated): ").split()))
    return max(set(lst), key=lst.count)