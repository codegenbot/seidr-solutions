num_tests = int(input())
for _ in range(num_tests):
    arr_size = int(input())
    arr = list(map(int, input().split()))
    target = int(input())
    
    complements = {}
    for num in arr:
        complement = target - num
        if complement in complements:
            print(complement)
            print(num)
            break
        complements[num] = True