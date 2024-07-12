```Python
def find_closest_elements(lst):
    lst.sort()
    min_diff = float('inf')
    closest_pair = []
    
    for i in range(len(lst) - 1):
        diff = lst[i+1] - lst[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = [lst[i], lst[i+1]]
            
    return closest_pair

numbers = list(map(int, input("Enter numbers: ").split()))
print(find_closest_elements(numbers))