from collections import Counter

def search():
    user_input = input("Enter a list of numbers separated by space: ")
    lst = [int(x) for x in user_input.split()]
    counter = Counter(lst)
    most_common = counter.most_common(1)[0]
    
    max_num = most_common[0]
    max_count = most_common[1]
    
    for num, count in counter.items():
        if count > max_count:
            max_num = num
            max_count = count
    
    return max_num

print(search())