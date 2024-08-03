n = int(input()) 
arr = list(map(int, input().split())) 

total_sum = sum(arr) 
half_sum = total_sum // 2 
running_sum = 0 
idx = 0 

for i, num in enumerate(arr): 
    running_sum += num 
    if running_sum >= half_sum: 
        idx = i 
        break 

if running_sum - half_sum < half_sum - running_sum + num: 
    idx += 1 

print(arr[: idx + 1]) 
print(arr[idx + 1 :])