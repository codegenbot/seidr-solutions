```Python
def sort_third(l: list):
    sorted_elements = [y for i, y in enumerate(l) if (i+1) % 3 == 0]
    sorted_elements = sorted(sorted_elements)
    return [x if i % 3 != 0 else next((y for y in sorted_elements if y not in l), None) 
            if any(y in sorted_elements for y in l) and (i+1) % 3 == 0 
            else x 
            for i, x in enumerate(l)]