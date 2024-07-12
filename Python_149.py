```
def sorted_list_sum(lst):
    return sum(int(i) for i in [word for word in lst if len(word) % 2 == 0], key=lambda x: (len(x), x))

lst = input("Enter space-separated words: ").split()
print(sorted_list_sum(lst))