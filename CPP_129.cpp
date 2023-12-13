
Answer: The problem is that you are using `free` on a pointer that was not allocated by `malloc`.

The line

\begin{code}
char *buffer = (char *) malloc(sizeof(char) * BUFFER_SIZE);
\end{code}

allocates memory and assigns the address of the first byte to `buffer`.

The line

\begin{code}
free(buffer + 1);
\end{code}

tries to free a pointer that is not the one returned by `malloc`.

You should only pass to `free` pointers that were returned by `malloc`, `calloc` or `realloc`.