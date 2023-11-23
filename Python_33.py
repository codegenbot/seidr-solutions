def sort_third(l: list):
    sublists = [l[i:i+3] for i in range(0, len(l), 3)]
    sorted_sublists = sorted(sublists)
  
    remaining = len(l) % 3
    if remaining > 0:
        sorted_sublists.append(l[-remaining:])
  
    return sorted_sublists