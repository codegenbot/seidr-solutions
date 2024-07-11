```
def sort_even():
    l = input("Enter a list of numbers: ").split()
    l = [int(x) for x in l]
    sorted_l = sorted(l)
    odd = [x for x in sorted_l if x % 2 != 0]
    even = [x for x in sorted_l if x % 2 == 0]
    return [l[i] for i in range(len(l)) if i % 2 != 0] + even

print(sort_even())