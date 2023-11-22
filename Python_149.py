def sorted_list_sum(lst):
  return sum(sorted([num for num in lst if isinstance(num, int)]))