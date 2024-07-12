list1 = list(map(int, input("Enter elements for List 1: ").split()))
list2 = list(map(int, input("Enter elements for List 2: ").split()))
find_closest_elements = get_closest_elements(list1 + list2)
check(find_closest_elements)