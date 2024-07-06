def find_closest_elements():
    lst = list(map(int, input("Enter elements of list separated by space: ").split()))
    n = len(lst)
    avg = sum(lst) / n
    diff_sum = sum(abs(x - avg) for x in lst)
    closest_pair_sum = float('inf')
    closest_pair_sum_list = []
    
    for i in range(n):
        for j in range(i+1, n):
            if abs((lst[i] + lst[j]) / 2 - avg) < abs(lst[i] - avg):
                pair_sum = (lst[i] + lst[j])
                if pair_sum < closest_pair_sum:
                    closest_pair_sum = pair_sum
                    closest_pair_sum_list = [(i, j)]
                elif pair_sum == closest_pair_sum:
                    closest_pair_sum_list.append((i, j))
                    
    return closest_pair_sum_list