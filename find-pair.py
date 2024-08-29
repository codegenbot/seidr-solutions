def find_pair(target):
    num_set = set()
    for num in input():
        complement = target - int(num)
        if complement in num_set:
            return "{} {}".format(complement, int(num))
        num_set.add(int(num))


print(find_pair(int(input())))