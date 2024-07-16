if next_cell is not None:
    path.append(grid[next_cell[0]][next_cell[1]])
    visited.add(next_cell)
    start = next_cell
else:
    break