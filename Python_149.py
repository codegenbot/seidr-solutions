def sorted_list_sum(lst):
   return sorted(lst, key=lambda s: (s[0], -len(s)))