def sort_even(l: list):
    return [l[i-1] if i % 2 != 0 else sorted([x for x in l if i%2==0])[i//2] for i in range(1,len(l)+1)]