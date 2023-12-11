def leaders(arr):
        result = []
        current_leader = arr[-1]
        for i in range(len(arr)-2, -1, -1):
                if arr[i] >= current_leader:
                        result.append(current_leader)
                        current_leader = arr[i]
        return result

def leaders_optimized(arr):
        max_val = arr[0]
        result = []
        for i in range(1, len(arr)):
                if arr[i] >= max_val:
                        max_val = arr[i]
                        result.append(max_val)
        return result