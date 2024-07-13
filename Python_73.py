n = int(input("Enter number of elements in the array: "))
arr = list(map(int, input("Enter {} space separated integers:".format(n)).split()))
print(array_change(arr))