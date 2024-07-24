even_numbers = sorted([x for x in l if 0 <= x % 2], key=lambda x: (x, -1) if x < 0 else (x, 1))
odd_numbers = sorted([x for x in l if 0 > x % 2], reverse=True, key=abs)
return tuple(even_numbers) + tuple(odd_numbers)