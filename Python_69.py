```
def search():
    lst = input("Enter a list of numbers (space separated): ").split()
    freq_dict = {}
    for num in [int(n) for n in lst]:
        if num > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    if not freq_dict:
        print(-1)
    else:
        print(max(freq_dict.keys()))

search()