for (int dir = 0; dir < 4; dir++) {
    int newX = pos.first + (dir % 2 ? -1 : 1);
    int newY = pos.second + (dir == 0 ? -1 : 1);

    if (newX >= 0 && newX < n && newY >= 0 && newY < n && !visited[newX][newY]) {
        visited[newX][newY] = true;
        res.push_back(grid[newX][newY]);
        q.push({{newX, newY}, path});
        
        if ((int)res.size() == k) {
            return res;
        }
    }
}