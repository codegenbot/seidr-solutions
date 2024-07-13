def leaders(arr): 
    return [arr[-1]] + [x for i,x in enumerate(reversed(arr)) if all(y <= x for y in reversed(arr)[:i])]