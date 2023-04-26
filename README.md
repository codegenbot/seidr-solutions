This repository contains solutions to Program Synthesis Benchmark 2 [[Helmuth Kelly GECCO 2021]](https://arxiv.org/abs/2106.06086) written fully autonomously by the OpenAI Codex model with the use of [Synthesize Execute Instruct Debug Rank](https://github.com/vadim0x60/seidr) [[Liventsev, Grishina GECCO 2023]](https://arxiv.org/abs/2304.10423) framework with different hyperparameters in different programming languages.

For example, to find a solution of `fizz-buzz` in Python produced by SEIDR with tree arity 10 and prompt 6, run

```
git checkout bf10_promptid6
cat fizz-buzz.py
```

For a solution of `find-pairs` in C++ with tree arity of 1000 (infinity) and prompt 9 run 

```
git checkout bf1000_promptid9
cat find-pairs.cpp
```

This can be done for tree arities of 1, 10, 100 and 100, prompt ids 1-10 and languages Python and C++. For more information on what tree arity is, what prompt ids stand for, why tree arity of 1000 is equivalent to infinity and other details of the experiment design, please see the paper.

*Nota Bene:* SEIDR is an iterative program synthesis method and [our implementation thereof](https://github.com/vadim0x60/seidr) follows the human tradition of commiting intermediate candidate solutions to the working repository. As a result, this repository is history-aware can be used to study the pathways taken by the LLM-driven framework on the way to the final solution. Just run

```
git checkout bf{bf}_promptid{promptid}
git log -p -- {problem}.{cpp/py}
```

Please reach out if you run an interesting analysis of our data or need help running one.
