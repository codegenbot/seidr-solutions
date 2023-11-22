def sorted_list_sum(lst):
  return sorted(filter(lambda x: x.isdigit(), map(str, lst)))