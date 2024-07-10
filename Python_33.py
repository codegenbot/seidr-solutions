def sort_third(input_list):
    return sorted(input_list, key=lambda x: int(str(x).zfill(3)[-1]) if isinstance(x, int) and len(str(x)) >= 3 else float('inf'))