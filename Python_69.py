from collections import Counter

def search():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    counter = Counter(lst)
    most_common = counter.most_common(1)[0]
    if most_common[1] > 1:
        return max(set(lst), key=lst.count)
    else:
        return most_common[0]

print(search())