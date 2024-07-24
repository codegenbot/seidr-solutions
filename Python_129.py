def findMinHeightTrees(n, edges):
    if n == 1:
        return [0]
    
    tree_dict = {i: i for i in range(n)}
    height = [0] * n
    children = [0] * n
    
    for edge in edges:
        parent, child = edge
        tree_dict[child] = parent
        children[parent] += 1
        
    queue = collections.deque()
    
    for node in range(n):
        if children[node] == 0:
            queue.append(node)
            
    while queue:
        level_size = len(queue)
        
        for _ in range(level_size):
            node = queue.popleft()
            height[node] = max(height) + 1
            
            for child in tree_dict:
                if tree_dict[child] == node:
                    children[node] -= 1
                    if children[node] == 0:
                        queue.append(child)
                        tree_dict[child] = None
                        
    min_height_tree = []
    
    while queue:
        node = queue.popleft()
        min_height_tree.append(node)
        
    return min_height_tree