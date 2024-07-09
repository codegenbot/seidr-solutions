```
def find_pair(target, numbers):
    num_dict = {}
    for num in numbers:
        complement = target - num
        if complement in num_dict:
            return str(complement) + "\n" + str(num)
        num_dict[num] = True
    return "No pair found"


target = int(input())
numbers = [int(x) for x in input().split()]
print(find_pair(target, numbers))