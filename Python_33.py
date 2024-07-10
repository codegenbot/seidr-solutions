def sort_and_distribute(lst):
    odd_list = [i for i in lst if i % 3 != 0]
    sorted_odd = sorted(odd_list)
    
    if len(lst) % 3 == 1:
        return [sorted_odd[0]] * (len(lst) // 3 + 1)
    elif len(lst) % 3 == 2:
        return sorted_odd[:len(lst)//3] + [sorted_odd[-1]]
    else:
        return sorted_odd * (len(lst) // 3)